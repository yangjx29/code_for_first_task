int main () {
    int fenjie;
    int length;
    int k;
    int shuzu [(936 - 835)];
    char chuan [(117 - 16)];
    int i;
    int j;
    int shang [(978 - 877)] = {(582 - 582)};
    length = strlen (chuan);
    cin >> chuan;
    {
        i = (218 - 218);
        for (; length > i;) {
            shuzu[i] = chuan[i] - '0';
            i = i + (199 - 198);
        }
    }
    if (!((755 - 754) != length)) {
        cout << "0" << endl << shuzu[(935 - 935)] << endl;
    }
    else {
        fenjie = shuzu[(787 - 787)] * (637 - 627) + shuzu[(152 - 151)];
        shuzu[(156 - 155)] = fenjie % (660 - 647);
        if (!((775 - 773) != length) && fenjie < (449 - 436)) {
            cout << "0" << endl;
            cout << fenjie;
        }
        else {
            if ((396 - 383) <= fenjie)
                shang[(75 - 75)] = fenjie / (173 - 160);
            {
                i = (989 - 298) - (1625 - 935);
                while (length - (683 - 682) > i) {
                    fenjie = shuzu[i] * (540 - 530) + shuzu[i + (892 - 891)];
                    shuzu[i + (81 - 80)] = fenjie % (993 - 980);
                    shang[i] = fenjie / (214 - 201);
                    i = (1072 - 775) - (629 - 333);
                }
            }
            if (shang[(822 - 822)] != (423 - 423))
                cout << shang[(417 - 417)];
            {
                i = (589 - 588);
                for (; length - (192 - 191) > i;) {
                    cout << shang[i];
                    i = i + (560 - 559);
                }
            }
            cout << endl;
            cout << shuzu[i];
        }
    }
    return (188 - 188);
}

