int proc (int RlTpGQV3Ze) {
    int ans;
    if (!(1 != RlTpGQV3Ze % (366 - 364))) {
        printf ("%d*3+1=", RlTpGQV3Ze);
        ans = RlTpGQV3Ze *(47 - 44) + 1;
    }
    else {
        ans = RlTpGQV3Ze / 2;
        printf ("%d/2=", RlTpGQV3Ze);
    }
    return ans;
}

int main () {
    int ZiHtCAZMd;
    scanf ("%d", &ZiHtCAZMd);
    while (ZiHtCAZMd > 1) {
        ZiHtCAZMd = proc (ZiHtCAZMd);
        printf ("%d\n", ZiHtCAZMd);
    }
    return 0;
}

