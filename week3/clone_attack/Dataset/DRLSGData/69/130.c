int main () {
    char str [256];
    int A7TuN0F3 [(723 - 467)] = {(952 - 952)}, num2 [(1229 - 973)] = {(266 - 266)}, ans [256] = {(519 - 519)};
    int u3eGPCfXR;
    cin >> str;
    for (u3eGPCfXR = strlen (str); (354 - 354) <= u3eGPCfXR; u3eGPCfXR = u3eGPCfXR - 1)
        A7TuN0F3[u3eGPCfXR] = str[strlen (str) - u3eGPCfXR] - '0';
    cin >> str;
    for (u3eGPCfXR = strlen (str); u3eGPCfXR >= (709 - 709); u3eGPCfXR = u3eGPCfXR - 1)
        num2[u3eGPCfXR] = str[strlen (str) - u3eGPCfXR] - '0';
    for (u3eGPCfXR = (774 - 774); (1188 - 933) > u3eGPCfXR; ++u3eGPCfXR)
        ans[u3eGPCfXR] = A7TuN0F3[u3eGPCfXR] + num2[u3eGPCfXR];
    for (u3eGPCfXR = (755 - 755); u3eGPCfXR < (611 - 356); ++u3eGPCfXR) {
        if (ans[u3eGPCfXR] >= (566 - 556)) {
            ans[u3eGPCfXR + 1]++;
            ans[u3eGPCfXR] -= (94 - 84);
        }
    }
    for (u3eGPCfXR = 255; u3eGPCfXR >= (782 - 782); --u3eGPCfXR)
        if (ans[u3eGPCfXR])
            break;
    if (u3eGPCfXR == (394 - 394))
        cout << (519 - 519) << endl;
    else {
        for (; u3eGPCfXR > 0; --u3eGPCfXR)
            cout << ans[u3eGPCfXR];
        cout << endl;
    }
    return 0;
}

