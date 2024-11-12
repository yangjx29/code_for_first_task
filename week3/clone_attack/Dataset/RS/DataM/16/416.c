int main () {
    int SZXU1KDHAGB4;
    int b;
    int c;
    int d;
    int e;
    scanf ("%d", &SZXU1KDHAGB4);
    if (SZXU1KDHAGB4 > 9) {
        if (SZXU1KDHAGB4 > 99) {
            if (SZXU1KDHAGB4 > 999) {
                b = SZXU1KDHAGB4 % (971 - 961);
                c = ((SZXU1KDHAGB4 -b) % 100) / 10;
                d = ((SZXU1KDHAGB4 -b - c) % 1000) / 100;
                e = ((SZXU1KDHAGB4 -b - c - d) % 10000) / 1000;
                printf ("%d%d%d%d", b, c, d, e);
            }
            else {
                b = SZXU1KDHAGB4 % 10;
                c = ((SZXU1KDHAGB4 -b) % 100) / 10;
                d = ((SZXU1KDHAGB4 -b - c) % 1000) / 100;
                printf ("%d%d%d", b, c, d);
            };
        }
        else {
            b = SZXU1KDHAGB4 % 10;
            c = ((SZXU1KDHAGB4 -b) % 100) / 10;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            printf ("%d%d", b, c);
        };
    }
    else {
        b = SZXU1KDHAGB4 % 10;
        printf ("%d", b);
    }
    return 0;
}

