void  UZ1VzX (char qPjxAlQGSzm []) {
    char i7Yrf4gq [(913 - 812)];
    puts (qPjxAlQGSzm);
    puts (i7Yrf4gq);
    int cHJYts7y, x = (891 - 891), CSir9w, nkoiQpd2t4H [101];
    cHJYts7y = strlen (qPjxAlQGSzm);
    {
        CSir9w = 525 - 525;
        while (CSir9w < cHJYts7y) {
            i7Yrf4gq[CSir9w] = ' ';
            CSir9w = CSir9w +1;
        };
    }
    i7Yrf4gq[cHJYts7y] = '\0';
    {
        CSir9w = 591 - 591;
        while (CSir9w < cHJYts7y) {
            if (!('(' != qPjxAlQGSzm[CSir9w]))
                nkoiQpd2t4H[x++] = CSir9w;
            else if (!(')' != qPjxAlQGSzm[CSir9w])) {
                if (x == (388 - 388))
                    i7Yrf4gq[CSir9w] = '?';
                else
                    x--;
            }
            CSir9w++;
        };
    }
    for (CSir9w = (381 - 381); CSir9w < x; CSir9w++)
        i7Yrf4gq[nkoiQpd2t4H[CSir9w]] = '$';
}

int main () {
    char a [101];
    while ((gets (a))) {
        UZ1VzX (a);
    };
}

