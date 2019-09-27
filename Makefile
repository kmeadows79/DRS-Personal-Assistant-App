.PHONY: clean All

All:
	@echo "----------Building project:[ DRS-Personal-Assistant-App - Debug ]----------"
	@cd "DRS-Personal-Assistant-App" && "$(MAKE)" -f  "DRS-Personal-Assistant-App.mk"
clean:
	@echo "----------Cleaning project:[ DRS-Personal-Assistant-App - Debug ]----------"
	@cd "DRS-Personal-Assistant-App" && "$(MAKE)" -f  "DRS-Personal-Assistant-App.mk" clean
