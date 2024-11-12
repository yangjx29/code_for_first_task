int main () {
    int g, MK8Fcze, erdLMJ;
    int method (int MK8Fcze, int erdLMJ);
    cin >> g;
    for (; g--;) {
        cin >> MK8Fcze >> erdLMJ;
        cout << method (MK8Fcze, erdLMJ) << endl;
    }
    return 0;
}

int method (int MK8Fcze, int erdLMJ) {
    if (MK8Fcze == 0)
        return (388 - 387);
    else {
        if (MK8Fcze == (735 - 734))
            return (229 - 228);
        else {
            if (erdLMJ == (276 - 275))
                return (328 - 327);
            else {
                if (MK8Fcze >= erdLMJ)
                    return method (MK8Fcze -erdLMJ, erdLMJ) + method (MK8Fcze, erdLMJ - (926 - 925));
                else
                    return method (MK8Fcze, erdLMJ - (832 - 831));
            };
        };
    };
}

