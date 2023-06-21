#include <iostream>
#include <string>

const int board_size = 8;
const int WHITE = 0;
const int BLACK = 1;

std::string board[board_size][board_size];
bool is_valid_knight_move(std::string board[][board_size], int from_row, int from_col, int to_row, int to_col)
{
    if (to_row < 0 || to_row >= board_size || to_col < 0 || to_col >= board_size)
    {
        return false;
    }

    int row_diff = abs(to_row - from_row);
    int col_diff = abs(to_col - from_col);

    if ((row_diff == 2 && col_diff == 1) || (row_diff == 1 && col_diff == 2))
    {
        return true;
    }

    return false;
}

bool is_valid_bishop_move(std::string board[][board_size], int from_row, int from_col, int to_row, int to_col)
{
    if (to_row < 0 || to_row >= board_size || to_col < 0 || to_col >= board_size)
    {
        return false;
    }

    int row_diff = abs(to_row - from_row);
    int col_diff = abs(to_col - from_col);

    if (row_diff == col_diff)
    {
        int row_dir = (to_row > from_row) ? 1 : -1;
        int col_dir = (to_col > from_col) ? 1 : -1;

        for (int i = 1; i < row_diff; ++i)
        {
            int row = from_row + i * row_dir;
            int col = from_col + i * col_dir;
            if (board[row][col] != "") {
                return false;
            }
        }

        return true;
    }

    return false;
}
bool is_valid_rook_move(std::string board[][board_size], int from_row, int from_col, int to_row, int to_col)
{
    if (to_row < 0 || to_row >= board_size || to_col < 0 || to_col >= board_size)
    {
        return false;
    }

    if (to_row == from_row || to_col == from_col)
    {
        int row_dir = (to_row > from_row) ? 1 : (to_row < from_row) ? -1 : 0;
        int col_dir = (to_col > from_col) ? 1 : (to_col < from_col) ? -1 : 0;

        int row = from_row + row_dir;
        int col = from_col + col_dir;
        while (row != to_row || col != to_col)
        {
            if (board[row][col] != "")
            {
                return false;
            }
            row += row_dir;
            col += col_dir;
        }

        return true;
    }

    return false;
}

bool is_valid_queen_move(std::string board[][board_size], int from_row, int from_col, int to_row, int to_col)
{
    if (to_row < 0 || to_row >= board_size || to_col < 0 || to_col >= board_size)
    {
        return false;
    }

    if (is_valid_rook_move(board, from_row, from_col, to_row, to_col) || is_valid_bishop_move(board, from_row, from_col, to_row, to_col))
    {
        return true;
    }
    
    if ((from_row == 0 && from_col == 0 && to_row == board_size - 1 && to_col == board_size - 1) ||
        (from_row == 0 && from_col == board_size - 1 && to_row == board_size - 1 && to_col == 0) ||
        (from_row == board_size - 1 && from_col == 0 && to_row == 0 && to_col == board_size - 1) ||
        (from_row == board_size - 1 && from_col == board_size - 1 && to_row == 0 && to_col == 0))
    {
        return true;
    }

    return false;
}


bool is_valid_king_move(std::string board[][board_size], int from_row, int from_col, int to_row, int to_col)
{
    if (to_row < 0 || to_row >= board_size || to_col < 0 || to_col >= board_size)
    {
        return false;
    }

    int row_diff = abs(to_row - from_row);
    int col_diff = abs(to_col - from_col);

    if (row_diff <= 1 && col_diff <= 1)
    {
        return true;
    }

    return false;
}


bool is_valid_pawn_move(std::string board[][board_size], int from_row, int from_col, int to_row, int to_col)
{
    if (to_row < 0 || to_row >= board_size || to_col < 0 || to_col >= board_size)
    {
        return false;
    }

    if (board[to_row][to_col] != "")
    {
        return false;
    }

    int forward_dir = (board[from_row][from_col][0] == 'W') ? -1 : 1;
    if (to_row != from_row + forward_dir)
    {
        return false;
    }

    if (to_col == from_col && board[to_row][to_col] == "")
    {
        board[to_row][to_col] = board[from_row][from_col];
        board[from_row][from_col] = "";
        return true;
    }

    if (abs(to_col - from_col) == 1 && board[to_row][to_col] != "")
    {
        board[to_row][to_col] = board[from_row][from_col];
        board[from_row][from_col] = "";
        return true;
    }

    return false;
}

void display_board(const std::string board[][board_size])
{
    std::cout << " --------------------------------------------------------" << std::endl;
    for (int row = 0; row < board_size; ++row) {
        std::cout << row + 1 << "|";
        for (int col = 0; col < board_size; ++col) {
            if (board[row][col] == "")
                std::cout << "      |";
            else
                std::cout << "  " << board[row][col] << "  |";
        }
        std::cout << std::endl << " --------------------------------------------------------" << std::endl;
    }
    std::cout << "   a    b    c    d    e    f    g    h    " << std::endl;
}

int main()
{
    std::string board[board_size][board_size] = {
        {"BR", "BN", "BB", "BQ", "BK", "BB", "BN", "BR"},
        {"BP", "BP", "BP", "BP", "BP", "BP", "BP", "BP"},
        {"", "", "", "", "", "", "", ""},
        {"", "", "", "", "", "", "", ""},
        {"", "", "", "", "", "", "", ""},
        {"", "", "", "", "", "", "", ""},
        {"WP", "WP", "WP", "WP", "WP", "WP", "WP", "WP"},
        {"WR", "WN", "WB", "WQ", "WK", "WB", "WN", "WR"}
    };

    display_board(board);

    int player = 0;
    std::string move;
    while (true)
    {
        std::cout << "Player " << player << ", enter your move: ";
        std::getline(std::cin, move);

        int from_col = move[0] - 'a';
        int from_row = move[1] - '1';
        int to_col = move[2] - 'a';
        int to_row = move[3] - '1';

        if (is_valid_pawn_move(board, from_row, from_col, to_row, to_col))
        {
            display_board(board);

            player = (player == 0) ? 1 : 0;
        }
        else if (is_valid_knight_move(board, from_row, from_col, to_row, to_col))
        {
            board[to_row][to_col] = board[from_row][from_col];
            board[from_row][from_col] = "";
            display_board(board);
            player = (player == 0) ? 1 : 0;
        }

        else
        {
            std::cout << "Invalid move!" << std::endl;
        }
        
    }


    return 0;
}
