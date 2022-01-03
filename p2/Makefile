TESTS = test_plus test_minus test_multiply test_divide test_mod test_pow test_negation test_factorial
test:
	@for t in $(TESTS); \
	do \
		g++ expression.cpp $$t.cpp -o $$t ; \
		timeout 10 ./$$t > $$t.out ; \
		cmp -s $$t.out $$t.ok; \
		RETVAL=$$?; \
		if [ $$RETVAL -eq 0 ]; then \
			echo "PASS: $$t"; \
		else \
			echo "FAIL: $$t"; \
		fi \
	done
	
clean:
	@for t in $(TESTS); \
	do \
		rm ./$$t ; \
		rm $$t.out ; \
	done
