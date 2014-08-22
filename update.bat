@echo off

rem Setup a clean site in docroot/
cd docroot/

call drush build

echo "Registering migrations ..."
call drush migrate-auto-register

IF NOT %1==--migrate GOTO DONE

:MIGRATE

	echo "Importing Activity taxonomy"
	call drush migrate-import TaxonomyActivity

	echo "Importing NACE codes taxonomy"
	call drush migrate-import --update TaxonomyNaceCodes

	echo "Importing ESENER taxonomy"
	call drush migrate-import --update TaxonomyEsener

	echo "Importing Publication types taxonomy"
	call drush migrate-import --update TaxonomyPublicationTypes

	echo "Importing multilingual Thesaurus taxonomy"
	call drush migrate-import --update TaxonomyThesaurus

	echo "Importing Tags taxonomy"
	call drush migrate-import --update TaxonomyTags

	echo "Importing Files content"
	call drush migrate-import --update Files

	echo "Importing News content"
	call drush migrate-import --update News

	echo "Importing Publications content"
	call drush migrate-import --update Publication

	echo "Importing Articles content"
	call drush migrate-import --update Article

	echo "Importing Blog content"
	call drush migrate-import --update Blog

	echo "Importing Case Study content"
	call drush migrate-import --update CaseStudy

fi

:DONE
call drush cc all
