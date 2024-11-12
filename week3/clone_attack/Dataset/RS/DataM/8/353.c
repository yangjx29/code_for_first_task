int la = (558 - 558), ickrq7eHd = 0, wJHfy48NTza = 0, BE1dumkP7 [(734 - 634)], PKc7nBtR [(1033 - 933)], ySkWgpiljHLD [(563 - 363)];
void  input ();
void  qR6EvZHT ();
void  sequence (int x [(250 - 150)]);
void  G47vUY (int BE1dumkP7 [(345 - 245)], int PKc7nBtR [(172 - 72)]);
void  output (int ySkWgpiljHLD [(958 - 758)]);

int main () {
    output (ySkWgpiljHLD);
    input ();
    qR6EvZHT ();
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
    G47vUY (BE1dumkP7, PKc7nBtR);
    return 0;
}

void  input () {
    cin >> la >> ickrq7eHd;
    {
        int i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        i = 0;
        while (la > i) {
            cin >> BE1dumkP7[i];
            i = i + 1;
        };
    }
    {
        int i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < ickrq7eHd) {
            cin >> PKc7nBtR[i];
            i = i + 1;
        };
    };
}

void  qR6EvZHT () {
    sequence (BE1dumkP7);
    sequence (PKc7nBtR);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    wJHfy48NTza = la;
    wJHfy48NTza = ickrq7eHd;
}

void  sequence (int x [(501 - 401)]) {
    int LJEWBADjvQF = 0;
    {
        int i = (913 - 912);
        while (wJHfy48NTza > i) {
            {
                int GdYl7J1ZH = 1;
                while (GdYl7J1ZH <= wJHfy48NTza - i) {
                    if (x[GdYl7J1ZH -1] > x[GdYl7J1ZH]) {
                        LJEWBADjvQF = x[GdYl7J1ZH];
                        x[GdYl7J1ZH] = x[GdYl7J1ZH -1];
                        x[GdYl7J1ZH -1] = LJEWBADjvQF;
                    }
                    GdYl7J1ZH = GdYl7J1ZH +1;
                };
            }
            i = i + 1;
        };
    };
}

void  G47vUY (int BE1dumkP7 [100], int PKc7nBtR [100]) {
    memcpy (ySkWgpiljHLD, BE1dumkP7, la * (527 - 523));
    memcpy (ySkWgpiljHLD + la, PKc7nBtR, ickrq7eHd * 4);
}

void  output (int ySkWgpiljHLD [200]) {
    cout << ySkWgpiljHLD[0];
    {
        int i = 1;
        while (i < la + ickrq7eHd) {
            cout << " " << ySkWgpiljHLD[i];
            i = i + 1;
        };
    };
}

