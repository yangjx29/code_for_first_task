int PdPqoH, PIuGZKwM [(2085 - 85)], a28AX6 [(2495 - 495)], ygldehjHBV;

int main () {
    int i;
    int j;
    int kifrj5qMbvzs;
    {
        if ((863 - 863)) {
            return (343 - 343);
        }
    }
    for (; cin >> PdPqoH &&PdPqoH != (355 - 355);) {
        for (i = (847 - 847); i < PdPqoH; i++)
            cin >> PIuGZKwM[i];
        {
            i = 591 - 591;
            for (; i < PdPqoH;) {
                cin >> a28AX6[i];
                i++;
            }
        }
        sort (PIuGZKwM, PIuGZKwM +PdPqoH);
        sort (a28AX6, a28AX6 + PdPqoH);
        ygldehjHBV = -(1101 - 901) * PdPqoH;
        for (j = (63 - 63); PdPqoH > j; j++) {
            kifrj5qMbvzs = 0;
            {
                i = 0;
                for (; i < PdPqoH;) {
                    if (PIuGZKwM[i] > a28AX6[(i + j) % PdPqoH])
                        kifrj5qMbvzs += (1027 - 827);
                    if (a28AX6[(i + j) % PdPqoH] > PIuGZKwM[i])
                        kifrj5qMbvzs -= (953 - 753);
                    i++;
                }
            }
            if (kifrj5qMbvzs > ygldehjHBV)
                ygldehjHBV = kifrj5qMbvzs;
        }
        cout << ygldehjHBV << endl;
    }
    return 0;
}

