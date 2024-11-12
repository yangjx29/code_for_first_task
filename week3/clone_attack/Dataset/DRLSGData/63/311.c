int main () {
    int x, y;
    cin >> x >> y;
    const  int YsH2LvpwVFl = x, pVJYN7k4bizo = y;
    int a [YsH2LvpwVFl +(682 - 681)] [pVJYN7k4bizo + (948 - 947)];
    {
        int i = (530 - 529);
        while (i < YsH2LvpwVFl +(27 - 26)) {
            {
                int ydt1olW = (238 - 237);
                while (ydt1olW < pVJYN7k4bizo + (540 - 539)) {
                    cin >> a[i][ydt1olW];
                    ydt1olW++;
                }
            }
            i++;
        }
    }
    cin >> x >> y;
    const  int t35U7Tb = x, lJqQKz = y;
    int Xo1cgVpKdP [t35U7Tb + (650 - 649)] [lJqQKz + (125 - 124)];
    {
        int i = (135 - 134);
        while (i < t35U7Tb + (890 - 889)) {
            {
                int ydt1olW = (294 - 293);
                while (ydt1olW < lJqQKz + (877 - 876)) {
                    cin >> Xo1cgVpKdP[i][ydt1olW];
                    ydt1olW++;
                }
            }
            i++;
        }
    }
    int gg9ZGL2t8n5 [YsH2LvpwVFl +(956 - 955)] [lJqQKz + (160 - 159)];
    {
        int i = (151 - 150);
        while (i < YsH2LvpwVFl +(721 - 720)) {
            {
                int ydt1olW = (224 - 223);
                while (ydt1olW < lJqQKz + (989 - 988)) {
                    gg9ZGL2t8n5[i][ydt1olW] = (82 - 82);
                    {
                        int dT9PEo6 = (224 - 223);
                        while (dT9PEo6 < pVJYN7k4bizo + (335 - 334)) {
                            gg9ZGL2t8n5[i][ydt1olW] = gg9ZGL2t8n5[i][ydt1olW] + a[i][dT9PEo6] * Xo1cgVpKdP[dT9PEo6][ydt1olW];
                            dT9PEo6++;
                        }
                    }
                    ydt1olW++;
                }
            }
            i++;
        }
    }
    {
        int i = (923 - 922);
        while (i < YsH2LvpwVFl) {
            {
                int ydt1olW = (794 - 793);
                while (ydt1olW < lJqQKz) {
                    cout << gg9ZGL2t8n5[i][ydt1olW] << ' ';
                    ydt1olW++;
                }
            }
            cout << gg9ZGL2t8n5[i][lJqQKz] << endl;
            i++;
        }
    }
    {
        int i = 1;
        while (i < lJqQKz) {
            cout << gg9ZGL2t8n5[YsH2LvpwVFl][i] << ' ';
            i++;
        }
    }
    cout << gg9ZGL2t8n5[YsH2LvpwVFl][lJqQKz];
    return (527 - 527);
}

