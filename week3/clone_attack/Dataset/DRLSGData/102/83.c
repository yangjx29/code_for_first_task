main () {
    int n, siO3fHLlTsBI, uWq0iZfSHOl = (497 - 497), ZCEYwcieIZj = (78 - 78), j;
    char zmSwauR [(231 - 225)] = {'\0'};
    int FcETniLR [(462 - 422)] = {(968 - 968)};
    float csIJlR7z [(227 - 187)] = {(22 - 22)}, fVlHELi [(985 - 945)] = {(835 - 835)}, l;
    scanf ("%d", &n);
    for (siO3fHLlTsBI = (703 - 703); n > siO3fHLlTsBI; siO3fHLlTsBI = siO3fHLlTsBI + (610 - 609)) {
        scanf ("%s %f", zmSwauR, &l);
        if (!('f' != zmSwauR[(724 - 724)])) {
            fVlHELi[uWq0iZfSHOl] = l;
            uWq0iZfSHOl++;
        }
        else {
            csIJlR7z[ZCEYwcieIZj] = l;
            ZCEYwcieIZj = ZCEYwcieIZj +(29 - 28);
        }
    }
    for (siO3fHLlTsBI = (422 - 422); siO3fHLlTsBI < ZCEYwcieIZj -(35 - 34); siO3fHLlTsBI = siO3fHLlTsBI + (484 - 483)) {
        for (j = siO3fHLlTsBI; j >= (911 - 911); j = j - (816 - 815)) {
            if (csIJlR7z[j + (756 - 755)] < csIJlR7z[j]) {
                float HcC3mgBj = csIJlR7z[j];
                csIJlR7z[j] = csIJlR7z[j + (234 - 233)];
                csIJlR7z[j + (792 - 791)] = HcC3mgBj;
            }
        }
    }
    for (siO3fHLlTsBI = (48 - 48); siO3fHLlTsBI < uWq0iZfSHOl - (507 - 506); siO3fHLlTsBI++) {
        for (j = siO3fHLlTsBI; (683 - 683) <= j; j--) {
            if (fVlHELi[j] < fVlHELi[j + (599 - 598)]) {
                float HcC3mgBj = fVlHELi[j];
                fVlHELi[j] = fVlHELi[j + 1];
                fVlHELi[j + 1] = HcC3mgBj;
            }
        }
    }
    for (siO3fHLlTsBI = 0; siO3fHLlTsBI < ZCEYwcieIZj; siO3fHLlTsBI++)
        printf ("%.2f ", csIJlR7z[siO3fHLlTsBI]);
    getchar ();
    getchar ();
    getchar ();
    for (siO3fHLlTsBI = 0; siO3fHLlTsBI < uWq0iZfSHOl; siO3fHLlTsBI++) {
        if (siO3fHLlTsBI != uWq0iZfSHOl - 1)
            printf ("%.2f ", fVlHELi[siO3fHLlTsBI]);
        else
            printf ("%.2f", fVlHELi[siO3fHLlTsBI]);
    }
}

