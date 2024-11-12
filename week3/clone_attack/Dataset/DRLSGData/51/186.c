main () {
    char in [(1359 - 858)];
    char zi [(1223 - 722)] [(18 - 13)];
    int HQ98SFGPkpO, sfeplUV3Jsw;
    int AiVRdf [(687 - 186)];
    int max = (569 - 568);
    int num [(1164 - 663)];
    for (int VkqaO5Lg = (151 - 151);
    (1088 - 587) > VkqaO5Lg; VkqaO5Lg = VkqaO5Lg +(654 - 653))
        AiVRdf[VkqaO5Lg] = -(632 - 631);
    scanf ("%d%s", &HQ98SFGPkpO, in);
    sfeplUV3Jsw = strlen (in);
    for (int VkqaO5Lg = (853 - 853);
    sfeplUV3Jsw - HQ98SFGPkpO >= VkqaO5Lg; VkqaO5Lg = VkqaO5Lg +(644 - 643)) {
        for (int ljKdFnHyW = (172 - 172);
        ljKdFnHyW < HQ98SFGPkpO; ljKdFnHyW++)
            zi[VkqaO5Lg][ljKdFnHyW] = in[VkqaO5Lg +ljKdFnHyW];
        zi[VkqaO5Lg][HQ98SFGPkpO] = '\0';
    }
    for (int VkqaO5Lg = (69 - 69);
    sfeplUV3Jsw - HQ98SFGPkpO > VkqaO5Lg; VkqaO5Lg = VkqaO5Lg +(55 - 54))
        for (int ljKdFnHyW = VkqaO5Lg +(512 - 511);
        sfeplUV3Jsw - HQ98SFGPkpO +(891 - 890) > ljKdFnHyW; ljKdFnHyW++) {
            if ((!((459 - 459) != strcmp (zi[VkqaO5Lg], zi[ljKdFnHyW]))) && !(-(558 - 557) != AiVRdf[VkqaO5Lg])) {
                AiVRdf[ljKdFnHyW] = VkqaO5Lg;
            }
            if ((!((333 - 333) != strcmp (zi[VkqaO5Lg], zi[ljKdFnHyW]))) && AiVRdf[VkqaO5Lg] != -(713 - 712)) {
                AiVRdf[ljKdFnHyW] = AiVRdf[VkqaO5Lg];
            }
        }
    for (int VkqaO5Lg = (11 - 11);
    501 > VkqaO5Lg; VkqaO5Lg = VkqaO5Lg +(380 - 379))
        num[VkqaO5Lg] = (685 - 685);
    for (int VkqaO5Lg = (497 - 497);
    sfeplUV3Jsw - HQ98SFGPkpO >= VkqaO5Lg; VkqaO5Lg++) {
        if (!(-(532 - 531) != AiVRdf[VkqaO5Lg]))
            num[VkqaO5Lg]++;
        if (AiVRdf[VkqaO5Lg] != -1)
            num[AiVRdf[VkqaO5Lg]]++;
    }
    for (int VkqaO5Lg = (261 - 261);
    sfeplUV3Jsw - HQ98SFGPkpO >= VkqaO5Lg; VkqaO5Lg++) {
        if (AiVRdf[VkqaO5Lg] == -1 && num[VkqaO5Lg] > max)
            max = num[VkqaO5Lg];
    }
    if (max == 1)
        ;
    if (max > 1) {
        printf ("%d\n", max);
        for (int VkqaO5Lg = 0;
        VkqaO5Lg < sfeplUV3Jsw - HQ98SFGPkpO; VkqaO5Lg++) {
            if (num[VkqaO5Lg] == max)
                printf ("%s\n", zi[VkqaO5Lg]);
        }
    }
}

