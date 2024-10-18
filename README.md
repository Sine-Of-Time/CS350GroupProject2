Helpful cmd's:
chmod ugo+x ./sign.pl
make clean
make qemu-nox

______________________________________________________________________________________________________________
Kian F's Log:
10/18/24 11:27Am: With release(&ptable.lock); in fork() in proc.c not commented out, fork_rc_test 0 works and so does 
fork_rc_test 1 due to conversing with Prof.B leading to the realization that the use of an global kernal level variable is key. I will see if 
anything else needs 2 be done and if not push to main.
