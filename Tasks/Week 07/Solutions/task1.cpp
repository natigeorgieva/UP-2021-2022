#include <iostream>
constexpr int MAX_SIZE = 10;

void read(int array[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        std::cin >> array[i];
    }
}

void print(int array[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << array[i] << ' ';
    }
}

void read(int matrix[][MAX_SIZE], int rows, int cols)
{
    for (int currentRow = 0; currentRow < rows; ++currentRow)
    {
        read(matrix[currentRow], cols);
    }
}

void print(int matrix[][MAX_SIZE], int rows, int cols)
{
    //до главния диагонал
    for (int currentRow = rows - 1; currentRow >= 0; currentRow--)
    {
        int copy = currentRow;

        for (int currentCol = 0; currentCol < cols - currentRow; currentCol++)
        {
            std::cout << matrix[copy][currentCol] << " ";
            copy++;
        }
    }

    //над главния диагонал
    for (int currentCol = 1; currentCol < cols; currentCol++)
    {
        int copy = currentCol;

        for (int currentRow = 0; currentRow < rows - currentCol; currentRow++)
        {
            std::cout << matrix[currentRow][copy] << " ";
            copy++;
        }
    }
}



int main()
{
    int matrix[MAX_SIZE][MAX_SIZE];
    read(matrix, 5, 5);

    print(matrix, 5, 5);

    return 0;
}
