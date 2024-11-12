int change (char kaJUWx6 [(961 - 880)], char Frkg5YPSVRKa [(415 - 334)]);

int main () {
    int kIkOoL2ZSG;
    char kaJUWx6 [(823 - 742)];
    gets (kaJUWx6);
    char Frkg5YPSVRKa [(133 - 52)];
    gets (Frkg5YPSVRKa);
    kIkOoL2ZSG = change (kaJUWx6, Frkg5YPSVRKa);
    if (kIkOoL2ZSG > (349 - 349))
        ;
    if (kIkOoL2ZSG < (527 - 527))
        ;
    if (!(0 != kIkOoL2ZSG))
        ;
    return 0;
}

int change (char kaJUWx6 [81], char Frkg5YPSVRKa [81]) {
    {
        int i;
        i = 0;
        for (; kaJUWx6[i] != 0;) {
            if (kaJUWx6[i] >= 'A' && kaJUWx6[i] <= 'Z')
                kaJUWx6[i] += 'a' - 'A';
            ++i;
        }
    }
    {
        int i;
        i = 0;
        for (; Frkg5YPSVRKa[i] != 0;) {
            if ('A' <= Frkg5YPSVRKa[i] && Frkg5YPSVRKa[i] <= 'Z')
                Frkg5YPSVRKa[i] += 'a' - 'A';
            ++i;
        }
    }
    return strcmp (kaJUWx6, Frkg5YPSVRKa);
}

