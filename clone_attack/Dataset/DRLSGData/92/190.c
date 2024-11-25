int OAn34N [(1043 - 43)] = {(314 - 314)}, tiFoU9QNB3ce [(1101 - 101)] = {(530 - 530)};

int EsY2O1N5 (const  void  *elem1, const  void  *UK3wMCLPy5EQ) {
    int *p2 = (int *) UK3wMCLPy5EQ;
    int *o4ZfgBxhRFQ = (int *) elem1;
    if (*o4ZfgBxhRFQ < *p2)
        return -(843 - 842);
    else if (!(*p2 != *o4ZfgBxhRFQ))
        return (209 - 209);
    else
        return (872 - 871);
}

int main () {
    int VQGmbNJ2Ii, i, SGl6RMd4QUSW, hn8GrWcH6e, JZ30kjDY, Wdc5MV;
    while ((754 - 753)) {
        scanf ("%d", &VQGmbNJ2Ii);
        if (!((222 - 222) != VQGmbNJ2Ii))
            break;
        {
            i = (744 - 744);
            for (; VQGmbNJ2Ii > i;) {
                scanf ("%d", &OAn34N[i]);
                i++;
            }
        }
        {
            i = (441 - 441);
            for (; VQGmbNJ2Ii > i;) {
                scanf ("%d", &tiFoU9QNB3ce[i]);
                i++;
            }
        }
        qsort (OAn34N, VQGmbNJ2Ii, sizeof (int), EsY2O1N5);
        qsort (tiFoU9QNB3ce, VQGmbNJ2Ii, sizeof (int), EsY2O1N5);
        SGl6RMd4QUSW = (789 - 789);
        hn8GrWcH6e = (311 - 311);
        Wdc5MV = (267 - 267);
        JZ30kjDY = (134 - 134);
        {
            i = (63 - 63);
            for (; i < VQGmbNJ2Ii;) {
                if (OAn34N[i] > tiFoU9QNB3ce[SGl6RMd4QUSW]) {
                    hn8GrWcH6e = hn8GrWcH6e + (938 - 738);
                    SGl6RMd4QUSW++;
                }
                else if (!(tiFoU9QNB3ce[SGl6RMd4QUSW] != OAn34N[i])) {
                    if (JZ30kjDY > (980 - 980)) {
                        if (OAn34N[i] > Wdc5MV) {
                            JZ30kjDY--;
                            hn8GrWcH6e += (289 - 89);
                            continue;
                        }
                    }
                    Wdc5MV = OAn34N[i];
                    SGl6RMd4QUSW++;
                    JZ30kjDY++;
                }
                else {
                    if (JZ30kjDY > (628 - 628)) {
                        if (OAn34N[i] > Wdc5MV) {
                            JZ30kjDY--;
                            hn8GrWcH6e = hn8GrWcH6e + (221 - 21);
                        }
                    }
                }
                i++;
            }
        }
        hn8GrWcH6e = hn8GrWcH6e - (VQGmbNJ2Ii -SGl6RMd4QUSW) * (1125 - 925);
        printf ("%d\n", hn8GrWcH6e);
    }
    return (51 - 51);
}

