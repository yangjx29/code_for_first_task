int main () {
    int bdJtDOVkZh, StB4OYMCZ2, VFg1kEDjWwB, qRUqftcV;
    int iX0CdH7i [(677 - 576)] [(434 - 333)], lrhwXydnP2 [(777 - 676)] [(336 - 235)], Yv7WGfwqLTo [(671 - 570)] [(879 - 778)];
    int tO1tWxoNf72, vdPEHwxm7Aj, Fj8tAQ7 = (910 - 910), Zt8Q2mC = (731 - 730);
    cin >> bdJtDOVkZh >> StB4OYMCZ2;
    for (tO1tWxoNf72 = (275 - 274); tO1tWxoNf72 <= bdJtDOVkZh; tO1tWxoNf72++)
        for (vdPEHwxm7Aj = (310 - 309); vdPEHwxm7Aj <= StB4OYMCZ2; vdPEHwxm7Aj++) {
            cin >> iX0CdH7i[tO1tWxoNf72][vdPEHwxm7Aj];
        }
    cin >> VFg1kEDjWwB >> qRUqftcV;
    for (tO1tWxoNf72 = (447 - 446); tO1tWxoNf72 <= VFg1kEDjWwB; tO1tWxoNf72++)
        for (vdPEHwxm7Aj = (350 - 349); vdPEHwxm7Aj <= qRUqftcV; vdPEHwxm7Aj++) {
            cin >> lrhwXydnP2[tO1tWxoNf72][vdPEHwxm7Aj];
        }
    memset (Yv7WGfwqLTo, (426 - 426), sizeof (Yv7WGfwqLTo));
    for (tO1tWxoNf72 = (212 - 211); tO1tWxoNf72 <= bdJtDOVkZh; tO1tWxoNf72++)
        for (vdPEHwxm7Aj = (844 - 843); vdPEHwxm7Aj <= qRUqftcV; vdPEHwxm7Aj++) {
            for (Fj8tAQ7 = (307 - 306); Fj8tAQ7 <= StB4OYMCZ2; Fj8tAQ7++) {
                Yv7WGfwqLTo[tO1tWxoNf72][vdPEHwxm7Aj] = Yv7WGfwqLTo[tO1tWxoNf72][vdPEHwxm7Aj] + iX0CdH7i[tO1tWxoNf72][Zt8Q2mC] * lrhwXydnP2[Zt8Q2mC][vdPEHwxm7Aj];
                Zt8Q2mC = Zt8Q2mC +1;
            }
            if (vdPEHwxm7Aj != qRUqftcV)
                cout << Yv7WGfwqLTo[tO1tWxoNf72][vdPEHwxm7Aj] << " ";
            else
                cout << Yv7WGfwqLTo[tO1tWxoNf72][vdPEHwxm7Aj] << endl;
            Zt8Q2mC = 1;
        }
    return (695 - 695);
}

