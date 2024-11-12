int main () {
    int row;
    int col;
    int dia;
    int array [101] [101];
    int dF7rLah;
    int j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> row >> col;
    for (dF7rLah = 0; dF7rLah < row; dF7rLah++)
        for (j = 0; j < col; j++)
            cin >> *(*(array + dF7rLah) + j);
    for (dia = 0; dia < row + col - 1; dia = dia + 1)
        for (dF7rLah = 0; dia >= dF7rLah; dF7rLah++) {
            if (col > (dia - dF7rLah) && dF7rLah < row)
                cout << *(*(array + dF7rLah) + (dia - dF7rLah)) << endl;
        }
    return 0;
}

