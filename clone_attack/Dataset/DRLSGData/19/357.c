int main () {
    int mFR1ZM5P;
    char *Qyp4OIxG;
    char *QnKDdVH;
    char zUw2mzXBgTo [(293 - 183)], replaced [(1027 - 917)], UMTH5Y [(224 - 114)];
    char dKyJmd68;
    cin.getline (zUw2mzXBgTo, (789 - 679));
    cin.getline (replaced, (279 - 169));
    mFR1ZM5P = strlen (replaced);
    QnKDdVH = strstr (zUw2mzXBgTo, replaced);
    Qyp4OIxG = zUw2mzXBgTo;
    cin.getline (UMTH5Y, (388 - 278));
    for (; QnKDdVH != NULL;) {
        if ((!(zUw2mzXBgTo != QnKDdVH) || !((286 - 286) != isalpha (*(QnKDdVH -(801 - 800))))) && !((437 - 437) != isalpha (*(QnKDdVH +mFR1ZM5P)))) {
            cout << Qyp4OIxG << UMTH5Y;
            Qyp4OIxG = QnKDdVH +mFR1ZM5P;
            *QnKDdVH = '\0';
            QnKDdVH = strstr (Qyp4OIxG, replaced);
        }
        else {
            QnKDdVH = zUw2mzXBgTo + (QnKDdVH -zUw2mzXBgTo) + mFR1ZM5P;
            dKyJmd68 = *QnKDdVH;
            *QnKDdVH = '\0';
            cout << Qyp4OIxG;
            Qyp4OIxG = QnKDdVH;
            *Qyp4OIxG = dKyJmd68;
            QnKDdVH = strstr (Qyp4OIxG, replaced);
        }
    }
    cout << Qyp4OIxG << endl;
    return (92 - 92);
}

