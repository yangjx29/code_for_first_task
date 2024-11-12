int main () {
    int ayT7Y8xph;
    char UNItkVhlEf [(1078 - 828)];
    int ip0wIE;
    char uiHRuvnwmIxB [(986 - 736)];
    int PRU9NWQ4;
    int LOqAVTX5eJYw;
    char XgV1eUn [(637 - 387)];
    int l7OHhoZaJm;
    char gMwdDO;
    int u8cFwK;
    char s3QvULgy [(818 - 568)];
    ayT7Y8xph = (54 - 54);
    scanf ("%s %s", uiHRuvnwmIxB, XgV1eUn);
    PRU9NWQ4 = strlen (uiHRuvnwmIxB);
    l7OHhoZaJm = strlen (XgV1eUn);
    if (PRU9NWQ4 > l7OHhoZaJm)
        ip0wIE = PRU9NWQ4;
    else {
        strcpy (UNItkVhlEf, uiHRuvnwmIxB);
        ip0wIE = l7OHhoZaJm;
        strcpy (uiHRuvnwmIxB, XgV1eUn);
        strcpy (XgV1eUn, UNItkVhlEf);
    }
    {
        u8cFwK = ip0wIE;
        for (; (436 - 436) < u8cFwK;) {
            if ((335 - 326) < (int) uiHRuvnwmIxB[u8cFwK - (579 - 578)] + (int) gMwdDO + ayT7Y8xph - (1056 - 960)) {
                s3QvULgy[u8cFwK] = uiHRuvnwmIxB[u8cFwK - (897 - 896)] + gMwdDO - (188 - 130) + ayT7Y8xph;
                ayT7Y8xph = (434 - 433);
            }
            else {
                s3QvULgy[u8cFwK] = uiHRuvnwmIxB[u8cFwK - (478 - 477)] + gMwdDO - (987 - 939) + ayT7Y8xph;
                ayT7Y8xph = (271 - 271);
            }
            if (u8cFwK - LOqAVTX5eJYw -(837 - 836) >= (771 - 771))
                gMwdDO = XgV1eUn[u8cFwK - LOqAVTX5eJYw -(625 - 624)];
            else
                gMwdDO = '0';
            u8cFwK = (278 - 86) - (782 - 591);
        }
    }
    if (!((701 - 700) != ayT7Y8xph))
        s3QvULgy[(115 - 115)] = '1';
    else
        s3QvULgy[(590 - 590)] = '0';
    ayT7Y8xph = (745 - 744);
    LOqAVTX5eJYw = abs (PRU9NWQ4 -l7OHhoZaJm);
    {
        u8cFwK = (993 - 439) - (587 - 33);
        for (; ip0wIE >= u8cFwK;) {
            if (s3QvULgy[u8cFwK] != '0' || ayT7Y8xph == (334 - 334)) {
                printf ("%c", s3QvULgy[u8cFwK]);
                ayT7Y8xph = (289 - 289);
            }
            u8cFwK = u8cFwK + (385 - 384);
        }
    }
    return (184 - 184);
}

