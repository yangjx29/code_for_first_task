int main () {
    char wamp2OzYSk0C;
    char BngjYJx [(725 - 615)], q9vXm8 [110], Z13bvKs [110];
    char *BIo6pfk;
    char *mvCJARZU6Oat;
    int len;
    cin.getline (BngjYJx, 110);
    cin.getline (q9vXm8, 110);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    cin.getline (Z13bvKs, 110);
    len = strlen (q9vXm8);
    BIo6pfk = strstr (BngjYJx, q9vXm8);
    mvCJARZU6Oat = BngjYJx;
    for (; BIo6pfk != NULL;) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((BIo6pfk == BngjYJx || isalpha (*(BIo6pfk -1)) == (926 - 926)) && isalpha (*(BIo6pfk +len)) == 0) {
            *BIo6pfk = '\0';
            cout << mvCJARZU6Oat << Z13bvKs;
            mvCJARZU6Oat = BIo6pfk +len;
            BIo6pfk = strstr (mvCJARZU6Oat, q9vXm8);
        }
        else {
            BIo6pfk = BngjYJx +(BIo6pfk -BngjYJx) + len;
            wamp2OzYSk0C = *BIo6pfk;
            *BIo6pfk = '\0';
            cout << mvCJARZU6Oat;
            mvCJARZU6Oat = BIo6pfk;
            *mvCJARZU6Oat = wamp2OzYSk0C;
            BIo6pfk = strstr (mvCJARZU6Oat, q9vXm8);
        };
    }
    cout << mvCJARZU6Oat << endl;
    return 0;
}

