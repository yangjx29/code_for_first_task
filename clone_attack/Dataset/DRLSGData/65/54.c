int main () {
    int n, BiY3RJE [200], jTp80J6Y [200], alM7oTc, liVB9YZKUv, FM4vZXPaj;
    scanf ("%d", &n);
    alM7oTc = 0;
    liVB9YZKUv = 0;
    {
        FM4vZXPaj = 0;
        while (n > FM4vZXPaj) {
            scanf ("%d%d", &BiY3RJE[FM4vZXPaj], &jTp80J6Y[FM4vZXPaj]);
            if (!(0 != BiY3RJE[FM4vZXPaj]) && !(1 != jTp80J6Y[FM4vZXPaj])) {
                alM7oTc = alM7oTc + 1;
            }
            if (!(0 != BiY3RJE[FM4vZXPaj]) && !(2 != jTp80J6Y[FM4vZXPaj])) {
                liVB9YZKUv = liVB9YZKUv + 1;
            }
            if (!(1 != BiY3RJE[FM4vZXPaj]) && !(2 != jTp80J6Y[FM4vZXPaj])) {
                alM7oTc = alM7oTc + 1;
            }
            if (!(1 != BiY3RJE[FM4vZXPaj]) && !(0 != jTp80J6Y[FM4vZXPaj])) {
                liVB9YZKUv = liVB9YZKUv + 1;
            }
            if (!(2 != BiY3RJE[FM4vZXPaj]) && !(0 != jTp80J6Y[FM4vZXPaj])) {
                alM7oTc = alM7oTc + 1;
            }
            if (BiY3RJE[FM4vZXPaj] == 2 && !(1 != jTp80J6Y[FM4vZXPaj])) {
                liVB9YZKUv++;
            }
            FM4vZXPaj++;
        }
    }
    if (alM7oTc > liVB9YZKUv) {
    }
    if (alM7oTc < liVB9YZKUv) {
    }
    if (alM7oTc == liVB9YZKUv) {
    }
    return 0;
}

