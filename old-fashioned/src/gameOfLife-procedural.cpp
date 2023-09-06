/*
Author: Emily Sillars
License: GNU General Public License v3.0
Description: A procedural implementation of Conway's Game of Life 
(see https://en.wikipedia.org/wiki/Conway%27s_Game_of_Life )
*/

#include <iostream>
#include <cstdlib>
#include <string>

#define DEFAULT_COLS 80
#define DEFAULT_ROWS 24
#define EXAMPLE_FILE "X O X X\nO X X O\nX X X X\nX X X O\n"

/*
Any live cell with two or three live neighbours survives.
Any dead cell with three live neighbours becomes a live cell.
All other live cells die in the next generation. Similarly, all other dead cells stay dead.
*/

int main (int argc, char* argv[]) {
    std::string filename = "";
    int rows = DEFAULT_ROWS;
    int cols = DEFAULT_COLS;
    switch (argc){
        case 4:
            std::cout << "yodel! argc is 4" << std::endl;
            
            try{
                rows = std::stoi(argv[1]);
                cols = std::stoi(argv[2]);
            }
            catch(std::exception & e){
                std::cerr << "Error: " << e.what() << std::endl;
                return EXIT_FAILURE;
            }
            filename = std::string(argv[3]);
            std::cout << filename << std::endl;
            break;
        default:
            std::cout << "Usage: ./gameOfLife-procedural <rows> <cols> <seed-file-name>" << std::endl
                      << "where" << std::endl
                      << "\t<rows> is an integer" << std::endl
                      << "\t<cols> is an integer" << std::endl
                      << "\t<seed-file-name> is a .txt file" << std::endl
                      << "and an example seed file looks like:" << std::endl
                      << std::endl << EXAMPLE_FILE << std::endl
                      << "where" << std::endl
                      << "\tX represents a dead cell" << std::endl
                      << "\tO represents a live cell" << std::endl
                      << "\trows = 4" << std::endl
                      << "\tcols = 4" << std::endl;
            break;
    }
    
    return EXIT_SUCCESS;
}