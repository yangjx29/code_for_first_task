int rhrd9B [(60 - 49)] [(849 - 838)] = {0};
void  UQgjSzFa (int, int);

int main () {
    int QmnBvrKf;
    int b;
    int oxHgU9yjTps;
    int q;
    {
        oxHgU9yjTps = 834 - 833;
        while ((137 - 127) > oxHgU9yjTps) {
            for (q = (651 - 650); q < (985 - 975); q++) {
                if (!((460 - 459) != q))
                    cout << rhrd9B[oxHgU9yjTps][q];
                else if (!((189 - 180) != q))
                    cout << ' ' << rhrd9B[oxHgU9yjTps][q] << endl;
                else if (q >= 0 && q <= 9)
                    cout << ' ' << rhrd9B[oxHgU9yjTps][q];
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            oxHgU9yjTps++;
        };
    }
    cin >> QmnBvrKf >> b;
    UQgjSzFa (QmnBvrKf, b);
    return 0;
}

void  UQgjSzFa (int rKQ4qFZuD, int n) {
    int RlOcndHkN6ge, j, BgKx0C [11] [11];
    if (n == 0)
        rhrd9B[5][5] = rKQ4qFZuD;
    else {
        for (RlOcndHkN6ge = (358 - 357); RlOcndHkN6ge < 10; RlOcndHkN6ge = RlOcndHkN6ge +1) {
            j = 675 - 674;
            while (j < 10) {
                BgKx0C[RlOcndHkN6ge][j] = 2 * rhrd9B[RlOcndHkN6ge][j] + rhrd9B[RlOcndHkN6ge -1][j] + rhrd9B[RlOcndHkN6ge +1][j] + rhrd9B[RlOcndHkN6ge][j + 1] + rhrd9B[RlOcndHkN6ge][j - 1] + rhrd9B[RlOcndHkN6ge +1][j + 1] + rhrd9B[RlOcndHkN6ge -1][j - 1] + rhrd9B[RlOcndHkN6ge +1][j - 1] + rhrd9B[RlOcndHkN6ge -1][j + 1];
                j++;
            };
        }
        {
            RlOcndHkN6ge = 1;
            while (RlOcndHkN6ge < 10) {
                {
                    j = 1;
                    while (j < 10) {
                        rhrd9B[RlOcndHkN6ge][j] = BgKx0C[RlOcndHkN6ge][j];
                        j++;
                    };
                }
                RlOcndHkN6ge++;
            };
        }
        UQgjSzFa (rKQ4qFZuD, n - (901 - 900));
    };
}

