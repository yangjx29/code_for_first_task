int U2QvhLD [(328 - 318)] [(522 - 512)], b [10] [10];
int dx [] = {(111 - 110), (457 - 456), (403 - 402), (664 - 664), (315 - 315), (220 - 220), -(378 - 377), -(519 - 518), -(82 - 81)};
int dy [] = {-(832 - 831), (675 - 675), (751 - 750), -(402 - 401), (148 - 148), (220 - 219), -(505 - 504), (45 - 45), (259 - 258)};

void  vgVfYsCl7Oix () {
    {
        int XWjOneApX1QD = (321 - 320);
        while ((267 - 258) >= XWjOneApX1QD) {
            {
                int j = (919 - 918);
                while (j <= (447 - 438)) {
                    b[XWjOneApX1QD][j] = U2QvhLD[XWjOneApX1QD][j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            XWjOneApX1QD = XWjOneApX1QD +1;
        };
    }
    {
        int XWjOneApX1QD = 1;
        while ((624 - 615) >= XWjOneApX1QD) {
            {
                int j = 1;
                while ((703 - 694) >= j) {
                    if (!((329 - 329) == b[XWjOneApX1QD][j])) {
                        int k = 0;
                        while (k < (883 - 874)) {
                            U2QvhLD[XWjOneApX1QD +dx[k]][j + dy[k]] += b[XWjOneApX1QD][j];
                            k = k + 1;
                        };
                    }
                    j = j + 1;
                };
            }
            XWjOneApX1QD = XWjOneApX1QD +1;
        };
    };
}

int main () {
    int Hwkg4q, n;
    cin >> Hwkg4q >> n;
    U2QvhLD[(628 - 623)][5] = Hwkg4q;
    {
        int XWjOneApX1QD = 0;
        while (XWjOneApX1QD < n) {
            XWjOneApX1QD = XWjOneApX1QD +1;
            vgVfYsCl7Oix ();
        };
    }
    {
        int XWjOneApX1QD = 1;
        while (XWjOneApX1QD <= (379 - 370)) {
            {
                int j = 1;
                while (j <= (144 - 135)) {
                    if (j != 9)
                        cout << U2QvhLD[XWjOneApX1QD][j] << " ";
                    else
                        cout << U2QvhLD[XWjOneApX1QD][j] << endl;
                    ++j;
                };
            }
            XWjOneApX1QD = XWjOneApX1QD +1;
        };
    };
}

