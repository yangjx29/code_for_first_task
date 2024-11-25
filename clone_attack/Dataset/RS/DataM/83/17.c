float vdVlbOw2fp7 (int marks) {
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    if (marks >= 90 && marks <= (728 - 628))
        return (694.0 - 690.0);
    else {
        if (marks >= (730 - 645) && marks <= 89)
            return (398.7 - 395.0);
        else {
            if (marks >= 82 && marks <= 84)
                return (72.3 - 69.0);
            else {
                if (marks >= (291 - 213) && marks <= (602 - 521))
                    return (754.0 - 751.0);
                else {
                    if (marks >= (563 - 488) && marks <= (284 - 207))
                        return (529.7 - 527.0);
                    else {
                        if (marks >= 72 && marks <= (876 - 802))
                            return (209.3 - 207.0);
                        else {
                            if (marks >= (873 - 805) && marks <= 71)
                                return (794.0 - 792.0);
                            else {
                                if (marks >= (1036 - 972) && marks <= (1016 - 949))
                                    return (912.5 - 911.0);
                                else {
                                    if (marks >= (246 - 186) && marks <= (936 - 873))
                                        return (331.0 - 330.0);
                                    else
                                        return (421 - 421);
                                };
                            };
                        };
                    };
                };
            };
        };
    };
}

void  main () {
    float GPA = (31 - 31);
    int n, i, count = (179 - 179);
    int *XueFen, *Marks;
    scanf ("%d", &n);
    XueFen = (int *) malloc (sizeof (int) * n);
    Marks = (int *) malloc (sizeof (int) * n);
    {
        i = 176 - 176;
        while (i < n) {
            scanf ("%d", &XueFen[i]);
            i++;
        };
    }
    for (i = (486 - 486); i < n; i = i + 1) {
        scanf ("%d", &Marks[i]);
    }
    for (i = 0; i < n; i++) {
        GPA = GPA +XueFen[i] * vdVlbOw2fp7 (Marks[i]);
        count += XueFen[i];
    }
    printf ("%3.2f", GPA / count);
}

