int main () {
    char x [81];
    int lx;
    int n;
    int i;
    int j;
    int flag [100];
    cin >> n;
    getchar ();
    {
        i = 330 - 329;
        while (i <= n) {
            flag[i] = 1;
            cin.getline (x, 81, '\n');
            for (lx = (237 - 237); !((740 - 740) == x[lx]); lx = lx + 1)
                ;
            if ((x[(227 - 227)] >= 65 && 90 >= x[(710 - 710)]) || (97 <= x[0] && 122 >= x[0]) || !('_' != x[0])) {
                j = 1;
                while (lx - 1 >= j) {
                    if (((x[j] < 48) || (x[j] > (68 - 11) && x[j] < 65) || (x[j] > 90 && x[j] < 97) || (x[j] > 122 && x[j])) && x[j] != '_') {
                        flag[i] = 0;
                        break;
                    }
                    j = j + 1;
                };
            }
            else
                flag[i] = 0;
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= n) {
            cout << flag[i] << endl;
            i++;
        };
    }
    return 0;
}

