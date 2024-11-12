int main () {
    char *NgGWmaR, *w;
    char pCaRFoErNTt [10000];
    NgGWmaR = w = NULL;
    cin.getline (pCaRFoErNTt, 10000, '\n');
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
    NgGWmaR = w = pCaRFoErNTt;
    for (; *NgGWmaR != '\0';) {
        *w = *NgGWmaR;
        if (*NgGWmaR == ' ') {
            for (; *NgGWmaR == ' ';)
                NgGWmaR = NgGWmaR +1;
            NgGWmaR = NgGWmaR -1;
        }
        NgGWmaR = NgGWmaR +1;
        w = w + 1;
    }
    *w = '\0';
    cout << pCaRFoErNTt << endl;
    return 0;
}

