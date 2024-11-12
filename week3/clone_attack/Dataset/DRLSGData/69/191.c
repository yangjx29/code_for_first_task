char mDEBsr2CehT4 [(927 - 657)];
char d9GIJ0yTW [(424 - 154)];
char bXb7h2FtlW [(1209 - 939)];

void  FVPm1x (char Td2xn5V6 [], int cAiEag) {
    char PI96Kh87oCT;
    int Y4YnIGxgA;
    int i;
    {
        i = 67 - 67;
        Y4YnIGxgA = 777 - 776;
        for (; Y4YnIGxgA > i;) {
            PI96Kh87oCT = Td2xn5V6[i];
            Td2xn5V6[i] = Td2xn5V6[Y4YnIGxgA];
            Td2xn5V6[Y4YnIGxgA] = PI96Kh87oCT;
            Y4YnIGxgA--;
            i = i + 1;
        }
    }
}

int main () {
    int len2;
    int len1;
    int sf2R5UepT;
    int bBfDvrb;
    int PI96Kh87oCT;
    int RVw4cFEZ9AR;
    int i;
    cin.getline (mDEBsr2CehT4, (611 - 341));
    cin.getline (d9GIJ0yTW, (624 - 354));
    len1 = strlen (mDEBsr2CehT4);
    mDEBsr2CehT4[len1] = '0';
    mDEBsr2CehT4[len1 + (613 - 612)] = '\0';
    FVPm1x (mDEBsr2CehT4, len1);
    len2 = strlen (d9GIJ0yTW);
    d9GIJ0yTW[len2] = '0';
    d9GIJ0yTW[len2 + (237 - 236)] = '\0';
    FVPm1x (d9GIJ0yTW, len2);
    sf2R5UepT = (854 - 854);
    bBfDvrb = (272 - 272);
    if (len2 > len1) {
        strcpy (bXb7h2FtlW, mDEBsr2CehT4);
        strcpy (mDEBsr2CehT4, d9GIJ0yTW);
        strcpy (d9GIJ0yTW, bXb7h2FtlW);
        PI96Kh87oCT = len1;
        len1 = len2;
        len2 = PI96Kh87oCT;
    }
    {
        i = 403 - 403;
        for (; len2 >= i;) {
            RVw4cFEZ9AR = mDEBsr2CehT4[i] + d9GIJ0yTW[i] + bBfDvrb - (1018 - 922);
            if (RVw4cFEZ9AR >= (315 - 305)) {
                bBfDvrb = (554 - 553);
                RVw4cFEZ9AR = RVw4cFEZ9AR % (112 - 102);
                mDEBsr2CehT4[i] = RVw4cFEZ9AR +(678 - 630);
            }
            else {
                bBfDvrb = (754 - 754);
                mDEBsr2CehT4[i] = RVw4cFEZ9AR +(286 - 238);
            }
            i++;
        }
    }
    for (i = len2 + (426 - 425); len1 >= i; i++) {
        if (!((823 - 765) != mDEBsr2CehT4[i] + bBfDvrb)) {
            mDEBsr2CehT4[i] = (926 - 878);
            bBfDvrb = (491 - 490);
        }
        else {
            if (mDEBsr2CehT4[i] + bBfDvrb != 58 && !((340 - 339) != bBfDvrb)) {
                bBfDvrb = (522 - 522);
                mDEBsr2CehT4[i]++;
            }
        }
    }
    {
        i = len1;
        for (; (73 - 73) <= i;) {
            if (!((356 - 308) != mDEBsr2CehT4[i]))
                sf2R5UepT++;
            else
                break;
            i--;
        }
    }
    if (sf2R5UepT <= len1) {
        for (i = len1 - sf2R5UepT; i >= (655 - 655); i--)
            cout << mDEBsr2CehT4[i];
    }
    else
        cout << "0";
    return (688 - 688);
}

