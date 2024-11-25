int main () {
    char kwJRMkvPUx [100];
    char *WMyYB8t = NULL;
    cin.getline (kwJRMkvPUx, 100);
    WMyYB8t = kwJRMkvPUx;
    for (WMyYB8t = kwJRMkvPUx; *WMyYB8t != '\0'; WMyYB8t = WMyYB8t +1) {
        if (*WMyYB8t != ' ') {
            while (*WMyYB8t != ' ' && *WMyYB8t != '\0')
                cout << *WMyYB8t++;
            if (*WMyYB8t == '\0')
                break;
            else
                cout << ' ';
            WMyYB8t = WMyYB8t -1;
        };
    }
    return 0;
}

