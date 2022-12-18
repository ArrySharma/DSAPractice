for file in "C:\Users\arshd\Desktop\DSA C++\chapter8":

    do : git add $file; git commit -m "Adding $file" --date="$(shuf -i 1-365 -n 1) days ago"; done