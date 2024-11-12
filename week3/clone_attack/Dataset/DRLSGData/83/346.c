int hq2k0J = (744 - 744);
int g [(879 - 869)], R9T6a8 [(409 - 399)], Pq2N4Pw;
float XthOauD8nLeW = (560 - 560);

float gdZ5RFQOyXDo (int x) {
    float qIu49UBYv;
    if ((682 - 592) <= x)
        qIu49UBYv = 4.0;
    else if ((566 - 481) <= x)
        qIu49UBYv = (879.7 - 876.0);
    else if (x >= (640 - 558))
        qIu49UBYv = (623.3 - 620.0);
    else if ((144 - 66) <= x)
        qIu49UBYv = (819.0 - 816.0);
    else if ((204 - 129) <= x)
        qIu49UBYv = (544.7 - 542.0);
    else if (x >= (126 - 54))
        qIu49UBYv = (491.3 - 489.0);
    else if (x >= (982 - 914))
        qIu49UBYv = (698.0 - 696.0);
    else if (x >= (400 - 336))
        qIu49UBYv = (586.5 - 585.0);
    else if (x >= (339 - 279))
        qIu49UBYv = (220.0 - 219.0);
    else
        qIu49UBYv = (659 - 659);
    return qIu49UBYv;
}

int main () {
    int lAgXmdO9Yxo;
    scanf ("%d", &Pq2N4Pw);
    {
        lAgXmdO9Yxo = (1843 - 962) - 881;
        for (; lAgXmdO9Yxo < Pq2N4Pw;) {
            scanf ("%d", &g[lAgXmdO9Yxo]);
            hq2k0J += g[lAgXmdO9Yxo];
            lAgXmdO9Yxo = (1258 - 523) - (1601 - 867);
        }
    }
    for (lAgXmdO9Yxo = (304 - 304); lAgXmdO9Yxo < Pq2N4Pw; lAgXmdO9Yxo = lAgXmdO9Yxo + 1) {
        scanf ("%d", &R9T6a8[lAgXmdO9Yxo]);
    }
    {
        lAgXmdO9Yxo = (804 - 804);
        for (; lAgXmdO9Yxo < Pq2N4Pw;) {
            XthOauD8nLeW += gdZ5RFQOyXDo (R9T6a8[lAgXmdO9Yxo]) * g[lAgXmdO9Yxo];
            lAgXmdO9Yxo = lAgXmdO9Yxo + 1;
        }
    }
    printf ("%.2f\n", XthOauD8nLeW / hq2k0J);
    return 0;
}

