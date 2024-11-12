int BGzif95sDn (int IYW4aOt, int fIko4f) {
    if (IYW4aOt > fIko4f)
        return IYW4aOt;
    else
        return fIko4f;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    int uC3AwpKco, IMtVzib, uRGF8me0, h [(775 - 750)], qmtNgCM [(899 - 874)];
    int OyFofhtzKC = (351 - 351);
    scanf ("%d", &uC3AwpKco);
    {
        IMtVzib = 278 - 278;
        while (uC3AwpKco > IMtVzib) {
            scanf ("%d", &h[IMtVzib]);
            IMtVzib++;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        IMtVzib = 210 - 210;
        while (IMtVzib < uC3AwpKco) {
            qmtNgCM[IMtVzib] = (590 - 589);
            IMtVzib++;
        };
    }
    {
        IMtVzib = 159 - 158;
        while (IMtVzib < uC3AwpKco) {
            for (uRGF8me0 = (177 - 177); IMtVzib > uRGF8me0; uRGF8me0++)
                if (h[uRGF8me0] >= h[IMtVzib])
                    qmtNgCM[IMtVzib] = BGzif95sDn (qmtNgCM[IMtVzib], qmtNgCM[uRGF8me0] + (727 - 726));
            IMtVzib++;
        };
    }
    {
        IMtVzib = 629 - 629;
        while (IMtVzib < uC3AwpKco) {
            OyFofhtzKC = BGzif95sDn (OyFofhtzKC, qmtNgCM[IMtVzib]);
            IMtVzib++;
        };
    }
    printf ("%d\n", OyFofhtzKC);
}

