function M = oppgave11(n)

M = zeros(n,n);

for i=1:n
    for j=1:n
        if(i==j)
            M(i,j) = 0;
        else
            M(i,j) = 1/(i-j);
        end
    end
end


end