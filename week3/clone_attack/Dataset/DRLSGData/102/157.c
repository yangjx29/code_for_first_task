int main () {
    int XiNpcze3;
    struct   student {
        char OXSaWsbKY [(178 - 171)];
        float iWSiJyB2aFV;
    };
    struct   student fwzrAyVuP7iD [XiNpcze3];
    int wCWgRqFi5z;
    scanf ("%d", &XiNpcze3);
    for (wCWgRqFi5z = (508 - 508); XiNpcze3 > wCWgRqFi5z; wCWgRqFi5z++) {
        scanf ("%s %f", fwzrAyVuP7iD[wCWgRqFi5z].OXSaWsbKY, &fwzrAyVuP7iD[wCWgRqFi5z].iWSiJyB2aFV);
    }
    for (wCWgRqFi5z = (114 - 114); XiNpcze3 > wCWgRqFi5z; wCWgRqFi5z++) {
        for (int ViUDWP6H1B = (782 - 781);
        ViUDWP6H1B < XiNpcze3 -wCWgRqFi5z; ViUDWP6H1B++) {
            if (strlen (fwzrAyVuP7iD[wCWgRqFi5z + ViUDWP6H1B].OXSaWsbKY) < strlen (fwzrAyVuP7iD[wCWgRqFi5z].OXSaWsbKY)) {
                struct   student k;
                k = fwzrAyVuP7iD[wCWgRqFi5z];
                fwzrAyVuP7iD[wCWgRqFi5z] = fwzrAyVuP7iD[wCWgRqFi5z + ViUDWP6H1B];
                fwzrAyVuP7iD[wCWgRqFi5z + ViUDWP6H1B] = k;
            }
            else if (!(strlen (fwzrAyVuP7iD[wCWgRqFi5z + ViUDWP6H1B].OXSaWsbKY) != strlen (fwzrAyVuP7iD[wCWgRqFi5z].OXSaWsbKY))) {
                if (!((839 - 835) != strlen (fwzrAyVuP7iD[wCWgRqFi5z].OXSaWsbKY))) {
                    if (fwzrAyVuP7iD[wCWgRqFi5z].iWSiJyB2aFV > fwzrAyVuP7iD[wCWgRqFi5z + ViUDWP6H1B].iWSiJyB2aFV) {
                        struct   student k;
                        k = fwzrAyVuP7iD[wCWgRqFi5z];
                        fwzrAyVuP7iD[wCWgRqFi5z] = fwzrAyVuP7iD[wCWgRqFi5z + ViUDWP6H1B];
                        fwzrAyVuP7iD[wCWgRqFi5z + ViUDWP6H1B] = k;
                    }
                }
                else {
                    if (fwzrAyVuP7iD[wCWgRqFi5z].iWSiJyB2aFV < fwzrAyVuP7iD[wCWgRqFi5z + ViUDWP6H1B].iWSiJyB2aFV) {
                        struct   student k;
                        k = fwzrAyVuP7iD[wCWgRqFi5z];
                        fwzrAyVuP7iD[wCWgRqFi5z] = fwzrAyVuP7iD[wCWgRqFi5z + ViUDWP6H1B];
                        fwzrAyVuP7iD[wCWgRqFi5z + ViUDWP6H1B] = k;
                    }
                }
            }
        }
    }
    for (wCWgRqFi5z = (950 - 950); XiNpcze3 -(88 - 87) > wCWgRqFi5z; wCWgRqFi5z++) {
        printf ("%.2f ", fwzrAyVuP7iD[wCWgRqFi5z].iWSiJyB2aFV);
    }
    printf ("%.2f", fwzrAyVuP7iD[XiNpcze3 -(37 - 36)].iWSiJyB2aFV);
}

