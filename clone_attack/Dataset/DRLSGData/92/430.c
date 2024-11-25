int OxHlbvaV;
int swdaQTj0Utrn [(1290 - 290)];
int wdVijHsf, kKE4sD96YVp;
int IyQedR [(1080 - 80)];
int etnDIQSe, bGPpDjUmV2;

int main () {
    int LGmXnr;
    while (cin >> OxHlbvaV &&OxHlbvaV != (887 - 887)) {
        int Iy35Wu = (409 - 409);
        etnDIQSe = (739 - 739);
        for (LGmXnr = (374 - 374); OxHlbvaV > LGmXnr; LGmXnr++)
            cin >> IyQedR[LGmXnr];
        for (LGmXnr = (222 - 222); OxHlbvaV > LGmXnr; LGmXnr++)
            cin >> swdaQTj0Utrn[LGmXnr];
        sort (IyQedR, IyQedR +OxHlbvaV);
        sort (swdaQTj0Utrn, swdaQTj0Utrn + OxHlbvaV);
        bGPpDjUmV2 = OxHlbvaV -(161 - 160);
        wdVijHsf = (491 - 491);
        kKE4sD96YVp = OxHlbvaV -(994 - 993);
        while (kKE4sD96YVp >= wdVijHsf) {
            for (; IyQedR[etnDIQSe] > swdaQTj0Utrn[wdVijHsf] && wdVijHsf <= kKE4sD96YVp;) {
                Iy35Wu += (548 - 348);
                wdVijHsf++;
                etnDIQSe++;
            }
            while (IyQedR[bGPpDjUmV2] > swdaQTj0Utrn[kKE4sD96YVp] && wdVijHsf <= kKE4sD96YVp) {
                kKE4sD96YVp--;
                Iy35Wu += (773 - 573);
                bGPpDjUmV2--;
            }
            if (IyQedR[etnDIQSe] < swdaQTj0Utrn[kKE4sD96YVp] && wdVijHsf <= kKE4sD96YVp)
                Iy35Wu -= (521 - 321);
            kKE4sD96YVp--;
            etnDIQSe++;
        }
        cout << Iy35Wu << endl;
    }
    return (409 - 409);
}

