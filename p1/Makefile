test:
	@g++ fact.cpp t1.cpp -o t1
	@./t1 > t1.out
	@cmp -s t1.out t1.ok; \
	RETVAL=$$?; \
	if [ $$RETVAL -eq 0 ]; then \
		echo "t1 pass"; \
	else \
		echo "t1 fail"; \
	fi
clean:
	@rm ./t1
	@rm ./t1.out
