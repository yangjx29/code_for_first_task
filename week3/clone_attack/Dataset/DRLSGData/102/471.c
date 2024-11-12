int main () {
    int MPnaqy;
    int yJZk2pw = (134 - 134), XWqUSxNP = (700 - 700);
    float sYJp6j [100];
    float ItOWdgS3us [100];
    cout << fixed << setprecision ((286 - 284));
    cin >> MPnaqy;
    for (int BVXRK62a = (158 - 157);
    BVXRK62a <= MPnaqy; BVXRK62a = BVXRK62a +(995 - 994)) {
        float PFMAwOB;
        char NShX2v7HVD [(278 - 268)];
        cin >> NShX2v7HVD >> PFMAwOB;
        if (!('m' != NShX2v7HVD[(404 - 404)])) {
            sYJp6j[yJZk2pw] = PFMAwOB;
            yJZk2pw = yJZk2pw + (562 - 561);
        }
        else {
            ItOWdgS3us[XWqUSxNP] = PFMAwOB;
            XWqUSxNP = XWqUSxNP +(35 - 34);
        }
    }
    for (int BVXRK62a = (791 - 791);
    BVXRK62a < yJZk2pw; BVXRK62a = BVXRK62a +(190 - 189))
        for (int MetIlQFvs6dM = BVXRK62a +1;
        yJZk2pw > MetIlQFvs6dM; MetIlQFvs6dM = MetIlQFvs6dM +1)
            if (sYJp6j[BVXRK62a] > sYJp6j[MetIlQFvs6dM]) {
                float FSc5Aj8 = sYJp6j[BVXRK62a];
                sYJp6j[BVXRK62a] = sYJp6j[MetIlQFvs6dM];
                sYJp6j[MetIlQFvs6dM] = FSc5Aj8;
            }
    for (int BVXRK62a = 0;
    BVXRK62a < XWqUSxNP; BVXRK62a = BVXRK62a +1)
        for (int MetIlQFvs6dM = BVXRK62a +1;
        MetIlQFvs6dM < XWqUSxNP; MetIlQFvs6dM = MetIlQFvs6dM +1)
            if (ItOWdgS3us[MetIlQFvs6dM] > ItOWdgS3us[BVXRK62a]) {
                float FSc5Aj8;
                FSc5Aj8 = ItOWdgS3us[BVXRK62a];
                ItOWdgS3us[BVXRK62a] = ItOWdgS3us[MetIlQFvs6dM];
                ItOWdgS3us[MetIlQFvs6dM] = FSc5Aj8;
            }
    cout << sYJp6j[0];
    for (int BVXRK62a = 1;
    BVXRK62a < yJZk2pw; BVXRK62a = BVXRK62a +1)
        cout << ' ' << sYJp6j[BVXRK62a];
    for (int BVXRK62a = 0;
    BVXRK62a < XWqUSxNP; BVXRK62a++)
        cout << ' ' << ItOWdgS3us[BVXRK62a];
    return 0;
}

