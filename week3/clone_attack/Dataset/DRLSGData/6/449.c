int main () {
    int VH3kws7;
    cin >> VH3kws7;
    for (int qdxTa5tG = (939 - 939);
    qdxTa5tG < VH3kws7; qdxTa5tG = qdxTa5tG + (557 - 556)) {
        int NfS9IYOn4, s3TSqPG9cYm1;
        cin >> NfS9IYOn4 >> s3TSqPG9cYm1;
        int GKeFILvYbU9 [NfS9IYOn4] [s3TSqPG9cYm1];
        for (int qdxTa5tG = (100 - 100);
        NfS9IYOn4 > qdxTa5tG; qdxTa5tG = qdxTa5tG + 1) {
            for (int R2Guqob = 0;
            R2Guqob < s3TSqPG9cYm1; R2Guqob = R2Guqob +1) {
                cin >> GKeFILvYbU9[qdxTa5tG][R2Guqob];
            }
        }
        int vErObYSi0MGW = 0;
        for (int qdxTa5tG = 0;
        s3TSqPG9cYm1 > qdxTa5tG; qdxTa5tG = qdxTa5tG + 1) {
            vErObYSi0MGW += *(*(GKeFILvYbU9)+qdxTa5tG);
        }
        if (NfS9IYOn4 > 1)
            for (int qdxTa5tG = 0;
            s3TSqPG9cYm1 > qdxTa5tG; qdxTa5tG++) {
                vErObYSi0MGW += *(*(GKeFILvYbU9 +NfS9IYOn4-1) + qdxTa5tG);
            }
        for (int qdxTa5tG = 1;
        qdxTa5tG < NfS9IYOn4 -1; qdxTa5tG++) {
            vErObYSi0MGW += *(*(GKeFILvYbU9 +qdxTa5tG) + 0);
        }
        for (int qdxTa5tG = 1;
        qdxTa5tG < NfS9IYOn4 -1; qdxTa5tG++) {
            vErObYSi0MGW += *(*(GKeFILvYbU9 +qdxTa5tG) + s3TSqPG9cYm1 - 1);
        }
        cout << vErObYSi0MGW;
        if (qdxTa5tG != VH3kws7 -1)
            cout << endl;
    }
    return 0;
}

