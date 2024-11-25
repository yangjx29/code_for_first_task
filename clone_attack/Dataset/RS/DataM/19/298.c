int main () {
    char Tdv7bf [100], Zs4yOCSx8E [10], opLZaBDkz [10], o3IuK57CS [50] [15];
    int LJF3OHg = 0, So9eVAUD, IlorZw2XUK6s = 0, DPb7jq54CR = 0;
    cin.getline (Tdv7bf, 100);
    cin.getline (Zs4yOCSx8E, 10);
    cin.getline (opLZaBDkz, 10);
    So9eVAUD = strlen (Tdv7bf);
    for (; So9eVAUD > LJF3OHg;) {
        for (; Tdv7bf[LJF3OHg] != ' ';)
            o3IuK57CS[IlorZw2XUK6s][DPb7jq54CR++] = Tdv7bf[LJF3OHg++];
        o3IuK57CS[IlorZw2XUK6s][DPb7jq54CR] = '\0';
        DPb7jq54CR = 0;
        IlorZw2XUK6s = IlorZw2XUK6s +1;
        LJF3OHg = LJF3OHg +1;
    }
    for (LJF3OHg = 0; IlorZw2XUK6s -1 > LJF3OHg; LJF3OHg++) {
        if (strcmp (Zs4yOCSx8E, o3IuK57CS[LJF3OHg]) == 0)
            cout << opLZaBDkz << " ";
        else
            cout << o3IuK57CS[LJF3OHg] << " ";
    }
    if (strcmp (Zs4yOCSx8E, o3IuK57CS[LJF3OHg]) == 0)
        cout << opLZaBDkz << endl;
    else
        cout << o3IuK57CS[LJF3OHg] << endl;
    return 0;
}

