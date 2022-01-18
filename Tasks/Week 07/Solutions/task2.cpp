#include <iostream>
constexpr int MAX_SIZE = 10;

void read(int array[], int n)
{
    for (int i = 0; i < n; i++)
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
    for (int currentRow = 0; currentRow < rows; currentRow++)//Само главния диагонал
        std::cout << matrix[currentRow][currentRow] << " ";

    for (int currentCol = 0; currentCol < cols-1; currentCol++)// Започваме от нулевия до предпоследния стълб
    {
        for (int currentRow = currentCol + 1; currentRow < rows; currentRow++)//За всеки стълб изкарваме всички редове до долу, започвайки от реда под главния диагонал
            std::cout << matrix[currentRow][currentCol] << " ";
    }

    for (int currentCol = cols - 1; currentCol > 0; currentCol--)//Обратното на втория цикъл (от ляво надясно на стълбовете)
    {
        for (int currentRow = currentCol - 1; currentRow >= 0; currentRow--)//От долу нагоре за редовете
            std::cout << matrix[currentRow][currentCol] << " ";
    }
}



int main()
{
    int matrix[MAX_SIZE][MAX_SIZE];
    read(matrix, 5, 5);

    print(matrix, 5, 5);

    return 0;
}
