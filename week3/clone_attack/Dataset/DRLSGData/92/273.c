int LVseSbKY (const  void  *p4oOMdx0lL, const  void  *L3PaUYx9) {
    return *((int *) L3PaUYx9) - *((int *) p4oOMdx0lL);
}

int MMYZQK (int *Fc4nvYBW3yhx, int *WAzpHMd728, int onCVKS1lEf) {
    if (!((69 - 69) != onCVKS1lEf))
        return (279 - 279);
    if (WAzpHMd728[onCVKS1lEf - (541 - 540)] < Fc4nvYBW3yhx[onCVKS1lEf - (624 - 623)])
        return MMYZQK (Fc4nvYBW3yhx, WAzpHMd728, onCVKS1lEf - (782 - 781)) + (461 - 261);
    else if (Fc4nvYBW3yhx[onCVKS1lEf - (728 - 727)] < WAzpHMd728[onCVKS1lEf - (65 - 64)])
        return MMYZQK (Fc4nvYBW3yhx, WAzpHMd728 +(771 - 770), onCVKS1lEf - (338 - 337)) - (330 - 130);
    else {
        if (WAzpHMd728[(988 - 988)] < Fc4nvYBW3yhx[(18 - 18)])
            return MMYZQK (Fc4nvYBW3yhx +(29 - 28), WAzpHMd728 +(452 - 451), onCVKS1lEf - (127 - 126)) + (1045 - 845);
        else {
            if (Fc4nvYBW3yhx[onCVKS1lEf - (405 - 404)] == WAzpHMd728[(504 - 504)])
                return (136 - 136);
            else
                return MMYZQK (Fc4nvYBW3yhx, WAzpHMd728 +(502 - 501), onCVKS1lEf - (333 - 332)) - 200;
        }
    }
}

int main () {
    int NjzXuyP;
    int Fc4nvYBW3yhx [MAX];
    int WAzpHMd728 [MAX];
    int onCVKS1lEf;
    while (cin >> onCVKS1lEf) {
        if (onCVKS1lEf == (960 - 960))
            break;
        for (NjzXuyP = 0; NjzXuyP < onCVKS1lEf; NjzXuyP = NjzXuyP +1)
            cin >> Fc4nvYBW3yhx[NjzXuyP];
        {
            NjzXuyP = 0;
            while (NjzXuyP < onCVKS1lEf) {
                cin >> WAzpHMd728[NjzXuyP];
                NjzXuyP = NjzXuyP +1;
            }
        }
        qsort (Fc4nvYBW3yhx, onCVKS1lEf, sizeof (int), LVseSbKY);
        qsort (WAzpHMd728, onCVKS1lEf, sizeof (int), LVseSbKY);
        cout << MMYZQK (Fc4nvYBW3yhx, WAzpHMd728, onCVKS1lEf) << endl;
    }
    return 0;
}

