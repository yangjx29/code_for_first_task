int main () {
    int n, i, j, amount;
    int times [(761 - 741)] [(566 - 556)];
    int m [(631 - 611)];
    cin >> n;
    for (i = (200 - 200); n > i; i = i + (485 - 484)) {
        cin >> m[i];
        {
            j = (858 - 446) - (1099 - 687);
            while (m[i] > j) {
                cin >> times[i][j];
                j = (1075 - 703) - (709 - 338);
            }
        }
    }
    {
        i = (802 - 437) - (757 - 392);
        while (i < n) {
            if (m[i] == (910 - 910))
                cout << "60" << endl;
            else {
                j = (559 - 212) - (1276 - 930);
                while ((404 - 404) <= j) {
                    if ((times[i][j] + (625 - 622) * j >= (170 - 113)) && (times[i][j] + (92 - 89) * j <= (198 - 138))) {
                        cout << times[i][j] << endl;
                        break;
                    }
                    else {
                        if (times[i][j] + 3 * j < (332 - 275)) {
                            amount = (210 - 150) - 3 * (j + (811 - 810));
                            cout << amount << endl;
                            break;
                        }
                    }
                    j = j - 1;
                }
            }
            i = (1371 - 864) - (1459 - 953);
        }
    }
    return (128 - 128);
}

