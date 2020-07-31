/*
** EPITECH PROJECT, 2020
** ex03
** File description:
** pyramid.c
*/

int recursive(int size, const int **map, int row, int col)
{
    int left;
    int right;

    if (size == row)
        return (0);
    left = map[row][col] + recursive(size, map, row + 1, col);
    right = map[row][col] + recursive(size, map, row + 1, col + 1);
    if (left < right)
        return (left);
    return (right);
}

int pyramid_path(int size, const int **map)
{
    return (recursive(size, map, 0, 0));
}