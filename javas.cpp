$(document).ready(function(){

// ADDING A NEW ITEM TO THE LIST

  // Define the callback function
  var addItem = function() {

    // Declare a variable to capture the input text value
    var $input = $('.submission-line__input').val();
    // If the input text field isn't empty, add it to the list as a new item
    if ($input) {
      $('.list').prepend('<li class="list__item"><a class="list__delete-btn">X</a>' + $input </li>');
    }
    // Clear the input text field
    $('.submission-line__input').val("");
  };

  // Add a new item to the list by clicking "Add" button
  $('.submission-line__btn').on('click', function(event){
    // (prevents form submit button unwanted default action)
    event.preventDefault();
    // run the callback function
    addItem();
  });

  // Add a new item to the list by hitting "Enter"
  $('.submission-line__input').keypress(function(event){
    if (event.which === 13) {
      // run the callback function
      addItem();
    }
  });

// DELETING AN ITEM FROM THE LIST

  // Clicking an item's delete button:
  $('.list').on('click', '.list__delete-btn', function(){
    // removes that item from the list
    $(this).parent().fadeOut(300, function(){
      $(this).remove();
    });
  });

// CHECKING AN ITEM OFF FROM THE LIST

  // Clicking an item's check button:
  $('.list').on('click', '.list__check-btn', function(event){
    // grays everything out
    $(this).parent().toggleClass('list__item--checked');
    $(this).siblings().toggleClass('list__delete-btn--checked');
    $(this).toggleClass('list__check-btn--checked');

    // moves the element to either the bottom or top of the list
    var $listItem = $(this).parent();
    if ($listItem.hasClass('list__item--checked')) {
      $('.list').append($listItem);
    } else {
      $('.list').prepend($listItem);
    }
  });

// MAKING LIST ITEMS SORTABLE

  $('.list').sortable({
      distance: 2,
      revert: 300,
      cancel: ".list__item--checked"
  });

});
