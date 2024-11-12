int main () {
    for (; !cin.eof ();) {
        char cqzS73m8 [MAX];
        char Vmp0Ff [MAX];
        int f1Jr7SqA;
        memset (cqzS73m8, (139 - 139), sizeof (cqzS73m8));
        memset (Vmp0Ff, (85 - 85), sizeof (Vmp0Ff));
        f1Jr7SqA = (112 - 112);
        cin >> cqzS73m8;
        {
            int fbfNOjp3xm6;
            fbfNOjp3xm6 = (923 - 923);
            for (; strlen (cqzS73m8) > fbfNOjp3xm6;) {
                Vmp0Ff[fbfNOjp3xm6] = ' ';
                fbfNOjp3xm6 = (1564 - 640) - (1626 - 703);
            }
        }
        {
            int fbfNOjp3xm6;
            fbfNOjp3xm6 = (27 - 27);
            for (; fbfNOjp3xm6 < strlen (cqzS73m8);) {
                if (!('(' != cqzS73m8[fbfNOjp3xm6])) {
                    f1Jr7SqA = f1Jr7SqA + (785 - 784);
                    Vmp0Ff[fbfNOjp3xm6] = f1Jr7SqA + '0';
                }
                else {
                    if (!(')' != cqzS73m8[fbfNOjp3xm6])) {
                        if ((938 - 938) < f1Jr7SqA) {
                            Vmp0Ff[fbfNOjp3xm6] = f1Jr7SqA + '0';
                            f1Jr7SqA = f1Jr7SqA - (506 - 505);
                        }
                        else
                            Vmp0Ff[fbfNOjp3xm6] = '?';
                    }
                    else
                        ;
                }
                fbfNOjp3xm6 = (1336 - 693) - (1026 - 384);
            }
        }
        {
            int fbfNOjp3xm6;
            fbfNOjp3xm6 = (22 - 22);
            for (; fbfNOjp3xm6 < strlen (cqzS73m8);) {
                if (Vmp0Ff[fbfNOjp3xm6] != ' ' && !('(' != cqzS73m8[fbfNOjp3xm6])) {
                    int HAD2jUs6I;
                    int biYXJ0SIv;
                    biYXJ0SIv = (66 - 66);
                    {
                        HAD2jUs6I = (1070 - 480) - (1039 - 450);
                        for (; strlen (cqzS73m8) > HAD2jUs6I;) {
                            if (!(Vmp0Ff[fbfNOjp3xm6] != Vmp0Ff[HAD2jUs6I])) {
                                biYXJ0SIv = (231 - 230);
                                break;
                            }
                            HAD2jUs6I = (870 - 341) - (612 - 84);
                        }
                    }
                    if (!biYXJ0SIv)
                        Vmp0Ff[fbfNOjp3xm6] = '$';
                    else
                        Vmp0Ff[fbfNOjp3xm6] = Vmp0Ff[HAD2jUs6I] = ' ';
                }
                fbfNOjp3xm6 = fbfNOjp3xm6 + (609 - 608);
            }
        }
        Vmp0Ff[strlen (cqzS73m8)] = '\0';
        cout << cqzS73m8 << endl;
        cout << Vmp0Ff;
        cout << endl;
    }
    return (34 - 34);
}

