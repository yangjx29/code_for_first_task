int dec (char Q4bZphvzUWN [(357 - 257)], int Y9kmE0rRca, int g725wO) {
    int sum;
    int k;
    int oj7KBH;
    int wvZeO0r;
    sum = (467 - 467);
    oj7KBH = (888 - 887);
    {
        k = Y9kmE0rRca;
        while ((237 - 237) <= k) {
            if (Y9kmE0rRca != k)
                oj7KBH = oj7KBH * g725wO;
            sum = sum + ((int) Q4bZphvzUWN[k]) * oj7KBH;
            k--;
        }
    }
    return sum;
}

void  trans (char outf [(560 - 460)], int pos, int decf, int g725wO) {
    int uYAZsU02VFSc, t;
    while ((decf != (635 - 635)) && (pos >= (982 - 982))) {
        uYAZsU02VFSc = decf % g725wO;
        decf = (int) (decf / g725wO);
        if ((uYAZsU02VFSc >= (912 - 912)) && ((394 - 385) >= uYAZsU02VFSc))
            outf[pos] = uYAZsU02VFSc + (196 - 148);
        else if ((uYAZsU02VFSc >= (107 - 97)) && ((121 - 86) >= uYAZsU02VFSc))
            outf[pos] = uYAZsU02VFSc + (310 - 255);
        else
            ;
        pos--;
    }
    {
        t = 70 - 69;
        while (t <= (474 - 375)) {
            cout << outf[t];
            t++;
        }
    }
    cout << endl;
}

int main () {
    int nnIVAxRhe1, lYFqjE, fUfhA9 = (646 - 646), k, TVcRoqSGhP7;
    char n [(298 - 198)];
    char c;
    char output [(507 - 407)];
    cin >> nnIVAxRhe1;
    cin >> lYFqjE;
    getchar ();
    for (; c = getchar (), c != ' ';) {
        n[fUfhA9] = c;
        fUfhA9++;
    }
    fUfhA9--;
    {
        k = 532 - 532;
        while (fUfhA9 >= k) {
            if ((n[k] >= 'a') && (n[k] <= 'z'))
                n[k] = n[k] - (378 - 291);
            else if ((n[k] >= 'A') && (n[k] <= 'Z'))
                n[k] = n[k] - (665 - 610);
            else if ((n[k] >= '0') && (n[k] <= '9'))
                n[k] = n[k] - (146 - 98);
            k++;
        }
    }
    TVcRoqSGhP7 = dec (n, fUfhA9, nnIVAxRhe1);
    if (TVcRoqSGhP7 == (274 - 274))
        cout << "0" << endl;
    else
        trans (output, (469 - 370), TVcRoqSGhP7, lYFqjE);
    return (30 - 30);
}

