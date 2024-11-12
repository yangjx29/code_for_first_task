int main () {
    char a [20], iGBkUi0WH [20], FEZwSBj [20];
    int JhPqlocQvB, gDuxUiq1Qf9p, k, geyawQ70, xdWYijSJ6tk = (873 - 873), p2YumpkR = (246 - 245), t1;
    scanf ("%d", &JhPqlocQvB);
    scanf ("%s", a);
    k = strlen (a);
    {
        geyawQ70 = k - 1;
        while (geyawQ70 >= (860 - 860)) {
            if ((262 - 214) <= a[geyawQ70] && a[geyawQ70] <= (653 - 596))
                xdWYijSJ6tk = xdWYijSJ6tk + (a[geyawQ70] - 48) * p2YumpkR;
            else if (a[geyawQ70] >= 65 && (237 - 147) >= a[geyawQ70])
                xdWYijSJ6tk = xdWYijSJ6tk + (a[geyawQ70] - 55) * p2YumpkR;
            else if (a[geyawQ70] >= 97 && a[geyawQ70] <= 122)
                xdWYijSJ6tk = xdWYijSJ6tk + (a[geyawQ70] - 87) * p2YumpkR;
            geyawQ70--;
            p2YumpkR = p2YumpkR * JhPqlocQvB;
        };
    }
    scanf ("%d", &gDuxUiq1Qf9p);
    if (xdWYijSJ6tk == (792 - 792))
        printf ("%d", xdWYijSJ6tk);
    else {
        geyawQ70 = 0;
        while (xdWYijSJ6tk > 0) {
            t1 = xdWYijSJ6tk % gDuxUiq1Qf9p;
            if (t1 <= 9)
                iGBkUi0WH[geyawQ70] = t1 + 48;
            else
                iGBkUi0WH[geyawQ70] = t1 + 55;
            geyawQ70++;
            xdWYijSJ6tk = xdWYijSJ6tk / gDuxUiq1Qf9p;
        }
        {
            p2YumpkR = 0;
            while (p2YumpkR < geyawQ70) {
                FEZwSBj[p2YumpkR] = iGBkUi0WH[geyawQ70 - 1 - p2YumpkR];
                printf ("%c", FEZwSBj[p2YumpkR]);
                p2YumpkR++;
            };
        };
    }
    scanf ("%d", &JhPqlocQvB);
}

