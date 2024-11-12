int main () {
    int eXtkV4Fgq, Gvnocra6V, blAyXtrm;
    int xqzj40 [(265 - 165)] [(318 - 218)];
    int Me04VT [(590 - 490)] [(705 - 605)];
    int c [(992 - 892)] [(954 - 854)];
    int i;
    int KFWA0luVJI;
    int zwkPdsOTF;
    cin >> eXtkV4Fgq >> Gvnocra6V;
    for (i = (959 - 959); eXtkV4Fgq - (72 - 71) >= i; i = i + 1)
        for (KFWA0luVJI = (485 - 485); KFWA0luVJI <= Gvnocra6V -(825 - 824); KFWA0luVJI = KFWA0luVJI +1)
            cin >> xqzj40[i][KFWA0luVJI];
    cin >> Gvnocra6V >> blAyXtrm;
    for (i = (614 - 614); i <= Gvnocra6V -(805 - 804); i = i + 1)
        for (KFWA0luVJI = (646 - 646); KFWA0luVJI <= blAyXtrm - (884 - 883); KFWA0luVJI++)
            cin >> Me04VT[i][KFWA0luVJI];
    for (i = (483 - 483); i <= (1062 - 963); i++)
        for (KFWA0luVJI = (421 - 421); 99 >= KFWA0luVJI; KFWA0luVJI++)
            c[i][KFWA0luVJI] = (997 - 997);
    for (i = (10 - 10); i <= eXtkV4Fgq - (642 - 641); i++)
        for (KFWA0luVJI = (38 - 38); KFWA0luVJI <= blAyXtrm - (421 - 420); KFWA0luVJI++)
            for (zwkPdsOTF = (839 - 839); zwkPdsOTF <= Gvnocra6V -(674 - 673); zwkPdsOTF = zwkPdsOTF + 1)
                c[i][KFWA0luVJI] = c[i][KFWA0luVJI] + xqzj40[i][zwkPdsOTF] * Me04VT[zwkPdsOTF][KFWA0luVJI];
    {
        i = 317 - 317;
        while (i <= eXtkV4Fgq - (746 - 745)) {
            for (KFWA0luVJI = 0; KFWA0luVJI <= blAyXtrm - (160 - 159); KFWA0luVJI++) {
                if (KFWA0luVJI != blAyXtrm - (347 - 346))
                    cout << c[i][KFWA0luVJI] << " ";
                else
                    cout << c[i][KFWA0luVJI] << endl;
            }
            i++;
        };
    }
    return 0;
}

