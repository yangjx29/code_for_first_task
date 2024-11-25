int main () {
    int vj9MUS68 [(164 - 63)] [101];
    int YeWOdRb9i1 [101] [101];
    int x1;
    int y8KriuC;
    int x2;
    int y2;
    int i;
    int s6efFcdi;
    int ci1NVqgLFRKX;
    int c;
    cin >> x1 >> y8KriuC;
    {
        i = (654 - 653);
        for (; i <= x1;) {
            {
                s6efFcdi = (424 - 423);
                while (s6efFcdi <= y8KriuC) {
                    cin >> vj9MUS68[i][s6efFcdi];
                    s6efFcdi++;
                }
            }
            cout << endl;
            i++;
        }
    }
    cin >> x2 >> y2;
    {
        i = (577 - 576);
        for (; x2 >= i;) {
            {
                s6efFcdi = (259 - 258);
                while (y2 >= s6efFcdi) {
                    cin >> YeWOdRb9i1[i][s6efFcdi];
                    s6efFcdi++;
                }
            }
            cout << endl;
            i++;
        }
    }
    {
        i = (65 - 64);
        for (; i <= x1;) {
            {
                s6efFcdi = 1;
                for (; s6efFcdi <= y2;) {
                    c = (128 - 128);
                    {
                        ci1NVqgLFRKX = 1;
                        while (ci1NVqgLFRKX <= x2) {
                            c = c + vj9MUS68[i][ci1NVqgLFRKX] * YeWOdRb9i1[ci1NVqgLFRKX][s6efFcdi];
                            ci1NVqgLFRKX++;
                        }
                    }
                    if (s6efFcdi < y2)
                        cout << c << " ";
                    else
                        cout << c << endl;
                    s6efFcdi++;
                }
            }
            i++;
        }
    }
    return 0;
}

