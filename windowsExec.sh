echo "compilando..."
g++ -std=c++11 main.cpp sortingAlgorithms.cpp -Wall -o exe
echo "deletando pasta test"
rm -r test
echo "criando pasta test..."
mkdir test
echo "executando..."
echo "compilando..."
g++ -std=c++11 main.cpp sortingAlgorithms.cpp -Wall -o exe
echo "deletando pasta test"
rm -r test
echo "criando pasta test..."
mkdir test
echo "executando..."

echo "--------------- RADIX SORT --------------"
n=100
while [ $n -le 1000000 ]
do
echo "executando n = $n"
./exe $n 1 > ./test/radixSortN$n.txt
n=$((n * 2))
done
echo "--------- RADIX SORT FINALIZADO ---------"

echo "--------------- MERGE SORT --------------"
n=100
while [ $n -le 1000000 ]
do
echo "executando n = $n"
./exe $n 2 > ./test/mergeSortN$n.txt
n=$((n * 2))
done
echo "--------- MERGE SORT FINALIZADO ---------"

echo "------------ INSERTION SORT -------------"
n=100
while [ $n -le 1000000 ]
do
echo "executando n = $n"
./exe $n 3 > ./test/insertionSortN$n.txt
n=$((n * 2))
done
echo "------- INSERTION SORT FINALIZADO -------"

sleep 6000

echo "FINALIZADO"